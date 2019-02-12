#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// all values initialized to zero
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame();
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(FString) const; // TODO make a more rich return value.
	int32 GetHiddenWordLength() const;

	void Reset(); // TODO make a more rich return value.
	FBullCowCount SubmitGuess(FString);

// ^^ Please try and ignore this and focus on the interface above ^^
private:
	// see constructor for initialization
	int32 MyCurrentTry;
	int32 MyMaxTries;

	FString MyHiddenWord;
};