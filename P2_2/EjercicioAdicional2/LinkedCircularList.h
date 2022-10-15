#pragma once
class LinkedCircularList
{
public:
	LinkedCircularList();
	~LinkedCircularList();

	void insert_at_end(const std::string&);
	void delete_element(const std::string&);

	void show_from_head_to_tail();
	void show_from_word_to_previous_word(const std::string&);

	bool is_empty() const;

private:
	struct node
	{
		std::string data{};
		node* next{};
	};

	node *head_, *tail_, *temp_;
};
