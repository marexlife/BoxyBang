#include "App.h"
#include "BoxyBang/Lexer/Lexer.h"
#include "TestCaseMachineSingleton.h"
#include <iostream>
#include <string>
#include <utility>

namespace BoxyBang
{
namespace App
{
void CApp::Run() noexcept
{
    try
    {
        this->TryRun();
    }
    catch (const std::exception& e)
    {
        std::operator<<(
            std::operator<<(
                std::cout,
                "App failed to execute with error: "),
            e.what());
    }
}

void CApp::TryRun()
{
    std::string sourceText(
        TestCaseMachineSingleton::GetTestCode());

    const auto result =
        Lexer::CLexer(std::move(sourceText)).Run();
}
} // namespace App
} // namespace BoxyBang