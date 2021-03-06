//
//  InsertCell.h
//  UICollectionViewDemo
//
//  Created by 讯心科技 on 2017/9/13.
//  Copyright © 2017年 讯心科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@class InsertCell;

typedef void(^DidClickDeleteButtonBlock)(InsertCell *cell);

@interface InsertCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

- (void)setIsEditing:(BOOL)isEditing;

- (void)didClickDeleteButtonBlock:(DidClickDeleteButtonBlock)block;

@end
