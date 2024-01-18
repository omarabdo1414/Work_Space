try
    {
        if (y==0)
        {
            throw _exception();
        }
        else
            std::cout << x/y << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }