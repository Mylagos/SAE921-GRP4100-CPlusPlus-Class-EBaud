#include <iostream>
#include <array>
// Prints out a deck of cards

enum class Suit : int
{
	Heart,
	Diamond,
	Spade,
	Club
};

enum class Value : int
{
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Jack = 11,
	Queen = 12,
	King = 13,
	Ace = 14
};

struct Card
{
	Value value;
	Suit suit;
};

std::string printAValue(Value value_)
{
	switch (value_)
	{
	case Value::Two:
		return "Two";
		break;
	case Value::Three:
		return "Three";
		break;
	case Value::Four:
		return "Four";
		break;
	case Value::Five:
		return "Five";
		break;
	case Value::Six:
		return "Six";
		break;
	case Value::Seven:
		return "Seven";
		break;
	case Value::Eight:
		return "Eight";
		break;
	case Value::Nine:
		return "Nine";
		break;
	case Value::Ten:
		return "Ten";
		break;
	case Value::Jack:
		return "Jack";
		break;
	case Value::Queen:
		return "Queen";
		break;
	case Value::King:
		return "King";
		break;
	case Value::Ace:
		return "Ace";
		break;
	default:
		break;
	}
}

std::string printASuit(Suit suit_)
{
	switch (suit_)
	{
	case Suit::Heart:
		return "Heart";
		break;
	case Suit::Diamond:
		return "Diamond";
		break;
	case Suit::Spade:
		return "Spade";
		break;
	case Suit::Club:
		return "Club";
		break;
	default:
		break;
	}
}

std::string printACard(Card card_)
{
	return printAValue(card_.value) + " of " + printASuit(card_.suit);
}

int main()
{
	std::array<Card, 52> deck{};
	int deckCount = 0;


	for (int s{ 0 }; s < 4; s++)
	{
		for (int v{ 0 }; v < 13; v++)
		{

			Card card;
			card.value = static_cast<Value>(v);
			card.suit = static_cast<Suit>(s);

			deck.at(deckCount) = card;
			deckCount++;
			std::cout << printACard(card) << std::endl;
		}
	}
}