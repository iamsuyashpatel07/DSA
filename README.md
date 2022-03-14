```(lang:Javascript)
import Image from "next/image";
import logo from "../public/images/logo.png";
import React from "react";
import Link from "next/link";

function Header2() {
  const [isOpen, setisOpen] = React.useState(false);
  const [serviceOpen, setServiceOpen] = React.useState(false);
  const [companyOpen, setCompanyOpen] = React.useState(false);
  function handleClick() {
    setisOpen(!isOpen);
  }
  return (
    <nav className="bg-gray-300 bg-opacity-95 lg:px-20 md:px-10 px-10 gotham-bold sticky top-0 z-30">
      <div className="flex lg:flex-row flex-col lg:justify-between py-3 lg:items-center">
        <div className="w-56 flex">
          <button
            type="button"
            className="block lg:hidden mr-2"
            onClick={handleClick}
          >
            <svg
              className="h-6 w-6 fill-current"
              xmlns="http://www.w3.org/2000/svg"
              viewBox="0 0 24 24"
            >
              {isOpen && (
                <path
                  fillRule="evenodd"
                  clipRule="evenodd"
                  d="M18.278 16.864a1 1 0 0 1-1.414 1.414l-4.829-4.828-4.828 4.828a1 1 0 0 1-1.414-1.414l4.828-4.829-4.828-4.828a1 1 0 0 1 1.414-1.414l4.829 4.828 4.828-4.828a1 1 0 1 1 1.414 1.414l-4.828 4.829 4.828 4.828z"
                />
              )}
              {!isOpen && (
                <path
                  fillRule="evenodd"
                  d="M4 5h16a1 1 0 0 1 0 2H4a1 1 0 1 1 0-2zm0 6h16a1 1 0 0 1 0 2H4a1 1 0 0 1 0-2zm0 6h16a1 1 0 0 1 0 2H4a1 1 0 0 1 0-2z"
                />
              )}
            </svg>
          </button>
          <Link href="/">
            <a>
              <Image src={logo} alt="logo" />
            </a>
          </Link>
        </div>

        <ul
          className={`lg:flex space-y-4 lg:space-y-0 lg:pt-0 pt-10  lg:text-left lg:space-x-12 ${
            isOpen ? "block" : "hidden"
          } `}
        >
          <li className="list-none uppercase font-bold text-pony_4d4258 relative">
            <button
              onClick={() => setServiceOpen(!serviceOpen)}
              className="uppercase font-bold flex items-center space-x-1 hover:text-orange"
            >
              <span className="text-shadow-md">Services</span>
              <svg
                xmlns="http://www.w3.org/2000/svg"
                className="h-5 w-5"
                viewBox="0 0 20 20"
                fill="currentColor"
              >
                <path
                  fillRule="evenodd"
                  d="M5.293 7.293a1 1 0 011.414 0L10 10.586l3.293-3.293a1 1 0 111.414 1.414l-4 4a1 1 0 01-1.414 0l-4-4a1 1 0 010-1.414z"
                  clipRule="evenodd"
                />
              </svg>
            </button>
            {serviceOpen && (
              <ul className="lg:absolute top-12 bg-pony_B4B5B6  text-pony_4d4258 px-5 lg:w-56 py-2 z-10">
                <li className="list-none font-bold  relative">
                  <Link href="/credit-card">
                    <a className="flex hover:text-orange cursor-pointer">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span className="hover:text-orange">Credit Card</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none font-bold relative hover:text-orange cursor-pointer">
                  <Link href="/cash-discount">
                    <a className="flex ">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>Cash Discount</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none  font-bold relative">
                  <Link href="/fundraising">
                    <a className="flex hover:text-orange">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>Fundraising</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none  font-bold relative">
                  <Link href="/equipment">
                    <a href="#" className="flex hover:text-orange">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>Equipment</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none  font-bold relative">
                  <Link href="/concerts-and-events">
                    <a className="flex hover:text-orange">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>{"Concerts & Events"}</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none  font-bold relative">
                  <a href="#" className="flex hover:text-orange">
                    <svg
                      xmlns="http://www.w3.org/2000/svg"
                      className="h-6 w-6"
                      fill="none"
                      viewBox="0 0 24 24"
                      stroke="currentColor"
                    >
                      <path
                        strokeLinecap="round"
                        strokeLinejoin="round"
                        strokeWidth="2"
                        d="M9 5l7 7-7 7"
                      />
                    </svg>
                    <Link href="/marketing">
                      <a>
                        <span>Marketing Services</span>
                      </a>
                    </Link>
                  </a>
                </li>
                <li className="list-none  font-bold  relative">
                  <a href="#" className="flex hover:text-orange">
                    <svg
                      xmlns="http://www.w3.org/2000/svg"
                      className="h-6 w-6"
                      fill="none"
                      viewBox="0 0 24 24"
                      stroke="currentColor"
                    >
                      <path
                        strokeLinecap="round"
                        strokeLinejoin="round"
                        strokeWidth="2"
                        d="M9 5l7 7-7 7"
                      />
                    </svg>
                    <span>Consulting</span>
                  </a>
                </li>
              </ul>
            )}
          </li>
          <li className="list-none uppercase font-bold text-pony_4d4258">
            <a href="#" className="hover:text-orange text-shadow-md">
              shedule demo{" "}
            </a>
          </li>
          <li className="list-none uppercase font-bold text-pony_4d4258 relative">
            <button
              onClick={() => setCompanyOpen(!companyOpen)}
              className="uppercase font-bold text-pony_4d4258 flex items-center space-x-1 hover:text-orange"
            >
              <span className="text-shadow-md">company</span>
              <svg
                xmlns="http://www.w3.org/2000/svg"
                className="h-5 w-5"
                viewBox="0 0 20 20"
                fill="currentColor"
              >
                <path
                  fillRule="evenodd"
                  d="M5.293 7.293a1 1 0 011.414 0L10 10.586l3.293-3.293a1 1 0 111.414 1.414l-4 4a1 1 0 01-1.414 0l-4-4a1 1 0 010-1.414z"
                  clipRule="evenodd"
                />
              </svg>
            </button>
            {companyOpen && (
              <ul className="lg:absolute top-12 bg-pony_B4B5B6  text-pony_4d4258 px-5 lg:w-56 py-2 z-10">
                <li className="list-none font-bold text-pony_4d4258s relative">
                  <Link href="/about">
                    <a className="flex hover:text-orange">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>About</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none  font-bold relative">
                  <Link href="/partner">
                    <a className="flex hover:text-orange">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>Become a Partner</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none  font-bold relative">
                  <a href="#" className="flex hover:text-orange">
                    <svg
                      xmlns="http://www.w3.org/2000/svg"
                      className="h-6 w-6"
                      fill="none"
                      viewBox="0 0 24 24"
                      stroke="currentColor"
                    >
                      <path
                        strokeLinecap="round"
                        strokeLinejoin="round"
                        strokeWidth="2"
                        d="M9 5l7 7-7 7"
                      />
                    </svg>
                    <span>Our Brands</span>
                  </a>
                </li>
                <li className="list-none font-bold relative">
                  <Link href="/news">
                    <a className="flex hover:text-orange">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>News</span>
                    </a>
                  </Link>
                </li>
                <li className="list-none font-bold  relative">
                  <Link href="/insights">
                    <a className="flex hover:text-orange">
                      <svg
                        xmlns="http://www.w3.org/2000/svg"
                        className="h-6 w-6"
                        fill="none"
                        viewBox="0 0 24 24"
                        stroke="currentColor"
                      >
                        <path
                          strokeLinecap="round"
                          strokeLinejoin="round"
                          strokeWidth="2"
                          d="M9 5l7 7-7 7"
                        />
                      </svg>
                      <span>{"Trends & Insights"}</span>
                    </a>
                  </Link>
                </li>
              </ul>
            )}
          </li>
          <li className="list-none uppercase font-bold text-pony_4d4258">
            <a href="#" className="hover:text-orange text-shadow-md">
              contact
            </a>
          </li>
          <li className="list-none uppercase font-bold text-pony_4d4258">
            <Link href="/portal">
              <a className="bg-orange text-white px-10 py-2 text-shadow-md">
                customer portal
              </a>
            </Link>
          </li>
        </ul>
      </div>
    </nav>
  );
}

export default Header2;
```
