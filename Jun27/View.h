//
//  View.h
//  Jun27
//
//  Created by Udo Hoppenworth on 6/27/13.
//  Copyright (c) 2013 Udo Hoppenworth. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum { FLAG, MAP } drawType;


@interface View : UIView {
    drawType drawCode;
}

@end
