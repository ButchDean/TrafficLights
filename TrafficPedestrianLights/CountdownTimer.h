#ifndef _COUNTDOWN_TIMER_
#define _COUNTDOWN_TIMER_

#include <chrono>
#include <ctime>

namespace CountdownTimer
{
	class CTimer
	{
	public:

		CTimer(const unsigned int TIMERDURATION) : duration(TIMERDURATION) 
		{
			start = std::chrono::steady_clock::now();
		}
		~CTimer() {}

		bool UpdateSequence();

	private:

		std::chrono::steady_clock::time_point start, end;
		std::chrono::duration<double> elapsed_secs;
		const double TIME_DELTA = 1.0;

		unsigned int duration;
	};
}

#endif
