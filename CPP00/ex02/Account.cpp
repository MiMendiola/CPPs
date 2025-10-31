#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts			= 0;
int Account::_totalAmount			= 0;
int Account::_totalNbDeposits		= 0;
int Account::_totalNbWithdrawals	= 0;

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout   << "accounts:" << getNbAccounts()
                << ";total:" << getTotalAmount()
                << ";deposits:" << getNbDeposits()
                << ";withdrawals:" << getNbWithdrawals()
                << "\n";
}

Account::Account( int initial_deposit )
{
	_accountIndex = 0;
	_amount = 0;

    _accountIndex += _nbAccounts;
	_nbAccounts++;

	_amount += initial_deposit;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";amount:" << initial_deposit
                << ";created\n";
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";closed\n";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";p_amount:" << _amount
                << ";deposits:" << deposit;

    _amount += deposit;
	_totalAmount += deposit;

	_nbDeposits++;
	_totalNbDeposits++;
    
    std::cout   << ";amount:" << _amount
                << ";nb_deposits:" << _nbDeposits
                << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";p_amount:" << _amount;


	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused\n";
		return false;
	}

    _amount -= withdrawal;
	_totalAmount -= withdrawal;

	_nbWithdrawals++;
	_totalNbWithdrawals++;
    
    std::cout   << ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals
                << "\n";

    return true;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals
                << "\n";
}

void Account::_displayTimestamp(void) {
    std::time_t t = std::time(0);
    std::tm* lt = std::localtime(&t);
    char buf[20];
    std::strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", lt);
    std::cout << buf << " ";
}
