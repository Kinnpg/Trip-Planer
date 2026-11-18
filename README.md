# Trip-Planer
A trip planer which contains several functions that help in organising, counting budget, setting timetable for your holidays. All written in C++

## Object-oriented concept map

|Concept in OOP| Implementation | Why is it used |
|---|---|---|
| Abstraction | class  `Activity` has method `virtual std::describe() =  0` | Different types of `Activity` are performed differently |
| Polymporphism | `Food::describe() = type + 'at' + place + 'costs' + cost` and `Hotel::describe() = 'nights' + nights + 'at' + 'name' + 'costs' + cost`| Each type of `Activity` demands different `description` |
| Composition | `std::vector<std::unique_ptr<Activity>> activities` |`Budget` is composed of costs generated from different `Activities`|
| Error Handling | if (`spendings` > `exchanged_wallet`) is True throw `std::invalid_argument` | `Budget` cannot be negative |
| Error Handling | `Activities::describe()= ''` throw `std::inavlid_argument` | `description` of an `Activity` cannot be empty |


`Class Diagram`

```mermaid
classDiagram
    class Plan {
        +int plan_id
        +int version
        +string destination
        +string author

        +describe_plan() string
    }

    class Attraction {
        +double rating
        
        +describe_activity() string
    }

    class Food {
        +string type
        +string cuisine

        +describe_activity() string
    }
    class Hotel {
        +int nights
        +int stars

        +describe_activity() string
    }
    class Transport {
        +string vehicle
        +double cost
        +double duration

        +describe_transport() string
    }

    class Activity {
        <<abstract>>
        +string name
        +int opening_time
        +int closing_time
        +double cost
        +string description

        +describe_activity()* string
    }

    class Budget {
        +double exchanged_budget
        +double spendings
        +vector~Activity~ activities
        +vector~Currency~ currencies

        +count_spendings() double
        +describe_budget() string
    }

    class Currency {
        +double exchange_rate
        +double wallet
        +string currency

        +exchange() double
        +describe_currency() string
    }
    class Timetable {
        +vector~Activity~
        +vector~Transport~
        
        +sort_by_time() : vector<string>
    }
    class SaveFile {
        +string file_name
        
        +save_file() : bool
    }

    Activity <|-- Attraction
    Activity <|-- Food
    Activity <|-- Hotel
    Budget o-- Activity
    Budget o-- Currency
    Budget o-- Transport
    Timetable o-- Activity
    Timetable o--Transport
```
