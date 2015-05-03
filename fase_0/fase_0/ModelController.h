//
//  ModelController.h
//  fase_0
//
//  Created by Marta Guerreiro on 03/05/15.
//  Copyright (c) 2015 Marta Guerreiro. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

