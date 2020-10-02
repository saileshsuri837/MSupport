import XCTest
@testable import MPS

final class MPSTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(MPS().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
