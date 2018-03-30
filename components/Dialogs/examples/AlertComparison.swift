/*
 Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

import Foundation
import MaterialComponents


/// This interface allows a user to present a UIKit Alert Controller and a Material Alert
/// Controller.
class DialogsAlertComparison: UIViewController {

  let materialButton = MDCFlatButton()
  let UIKitButton = MDCFlatButton()

  override func viewDidLoad() {
    super.viewDidLoad()

    view.backgroundColor = UIColor.white

    materialButton.translatesAutoresizingMaskIntoConstraints = false
    materialButton.setTitle("Material Alert", for: UIControlState())
    materialButton.setTitleColor(UIColor(white: 0.1, alpha:1), for: UIControlState())
    materialButton.sizeToFit()
    materialButton.addTarget(self, action: #selector(tapMaterial), for: .touchUpInside)
    self.view.addSubview(materialButton)

    NSLayoutConstraint.activate([
      NSLayoutConstraint(item:materialButton,
                       attribute:.centerX,
                       relatedBy:.equal,
                       toItem:self.view,
                       attribute:.centerX,
                       multiplier:1.0,
                       constant: 0.0),
      NSLayoutConstraint(item:materialButton,
                       attribute:.centerY,
                       relatedBy:.equal,
                       toItem:self.view,
                       attribute:.centerY,
                       multiplier:1.0,
                       constant: 0.0)
      ])


      UIKitButton.translatesAutoresizingMaskIntoConstraints = false
      UIKitButton.setTitle("UIKit Alert", for: UIControlState())
      UIKitButton.setTitleColor(UIColor(white: 0.1, alpha:1), for: UIControlState())
      UIKitButton.sizeToFit()
      UIKitButton.addTarget(self, action: #selector(tapUIKit), for: .touchUpInside)
      self.view.addSubview(UIKitButton)

      NSLayoutConstraint.activate([
      NSLayoutConstraint(item:UIKitButton,
      attribute:.centerX,
      relatedBy:.equal,
      toItem:self.view,
      attribute:.centerX,
      multiplier:1.0,
      constant: 0.0),
      NSLayoutConstraint(item:UIKitButton,
      attribute:.top,
      relatedBy:.equal,
      toItem:materialButton,
      attribute:.bottom,
      multiplier:1.0,
      constant: 8.0)
        ])
  }

  @objc func tapMaterial(_ sender: Any) {
    let messageString = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur " +
    "ultricies diam libero, eget porta arcu feugiat sit amet. Maecenas placerat felis sed risus " +
    "maximus tempus. Integer feugiat, augue in pellentesque dictum, justo erat ultricies leo, " +
    "quis eleifend nisi eros dictum mi. In finibus vulputate eros, in luctus diam auctor in. "

    let materialAlertController = MDCAlertController(title: nil, message: messageString)

    let acceptAction = MDCAlertAction(title:"Accept") { (_) in print("Accept") }
    materialAlertController.addAction(acceptAction)

    let rejectAction = MDCAlertAction(title:"Reject") { (_) in print("Reject") }
    materialAlertController.addAction(rejectAction)

    self.present(materialAlertController, animated: true, completion: nil)
  }

  @objc func tapUIKit(_ sender: Any) {
    let messageString = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur " +
      "ultricies diam libero, eget porta arcu feugiat sit amet. Maecenas placerat felis sed risus " +
      "maximus tempus. Integer feugiat, augue in pellentesque dictum, justo erat ultricies leo, " +
    "quis eleifend nisi eros dictum mi. In finibus vulputate eros, in luctus diam auctor in. "

    let alertController = UIAlertController(title: nil, message: messageString, preferredStyle:.alert)

    let acceptAction = UIAlertAction(title:"Accept", style:.default)
    alertController.addAction(acceptAction)

    let rejectAction = UIAlertAction(title:"Reject", style:.default)
    alertController.addAction(rejectAction)

    self.present(alertController, animated: true, completion: nil)
  }
}

// MARK: Catalog by convention
extension DialogsAlertComparison {
  @objc class func catalogBreadcrumbs() -> [String] {
    return [ "Dialogs", "Alert Comparison"]
  }

  @objc class func catalogIsPrimaryDemo() -> Bool {
    return false
  }

  @objc class func catalogIsPresentable() -> Bool {
    return false
  }
}
