//
//  Drawable.h
//  ModelViewer
//
//  Created by Arman on 10.02.17.
//  Copyright © 2017 3d4medical. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Program;

@protocol Drawable <NSObject>

- (void)drawInProgram:(Program *)program;

@end
