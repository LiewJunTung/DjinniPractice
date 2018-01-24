//
//  ViewController.swift
//  CalculatorApp
//
//  Created by Jun Tung Liew on 24/1/18.
//  Copyright © 2018 JT. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var calculator: HWCalculator? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()
        calculator = HWCalculator.create()
//        let number = calculator?.summation(30, number2: 50)
//        print("\(number ?? 0) is the answer")
//        // Do any additional setup after loading the view, typically from a nib.
//        resultText.text = "\(number ?? 0) is the answer"
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBOutlet weak var num1: UITextField!
    @IBOutlet weak var num2: UITextField!
    @IBOutlet weak var resultField: UILabel!
    //    @IBOutlet weak var resultText: UILabel!
//    @IBOutlet weak var firstNumber: UITextField!
//    @IBOutlet weak var secondNumber: UITextField!
    
    @IBAction func addition(_ sender: UIButton) {
        let answer: Int? = Int(num1.text!)! + Int(num2.text!)!
        resultField.text = "\(answer ?? 0)"
    }
    
    
}

