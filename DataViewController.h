//
//  DataViewController.h
//  CoreDataConcepts
//
//  Created by Prahlad on 1/9/17.
//  Copyright © 2017 Prahlad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *carMakeTxtFld;
@property (strong, nonatomic) IBOutlet UITextField *carModelTxtFld;
@property (strong, nonatomic) IBOutlet UITextField *carYearTxtFld;

@property (strong)NSManagedObjectModel *deviceObjModel;

@end
