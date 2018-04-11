//
//  WLChapter.h
//  WLModel
//
//  Created by dachuiwang on 2018/4/11.
//  Copyright © 2018年 dachuiwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WLChapter : NSObject

@property(nonatomic, strong)NSString *chapterIndex;
@property(nonatomic, strong)NSString *title;
@property(nonatomic, strong)NSString *link;
@property(nonatomic, strong)NSString *bookId;
@property(nonatomic, strong)NSString *sourceId;

@property(nonatomic, strong)NSString *sougou_cmd; // 搜狗用到

@end
