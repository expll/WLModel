//
//  WLReadLog.h
//  WLModel
//
//  Created by dachuiwang on 2018/4/11.
//  Copyright © 2018年 dachuiwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WLReadLog : NSObject

@property(nonatomic, strong)NSString *bookid;
@property(nonatomic, strong)NSString *chapterIndex;
@property(nonatomic, strong)NSString *pageIndex; //页数
@property(nonatomic, strong)NSString *lastChapter; //最后章节

@end
