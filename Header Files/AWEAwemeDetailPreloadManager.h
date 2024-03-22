//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEAwemeDetailPreloadManager : NSObject

@property (class, readonly, nonatomic) BOOL isDetailFeedCellPreload;
@property (class, readonly, nonatomic) long long scrollContinuousDirectionCount;
@property (class, readonly, nonatomic) double cellPreloadDelay;
@property (class, readonly, nonatomic) NSArray *closeClassNames;
@property (class, readonly, nonatomic) long long cellPreloadDelayCount;

+ (double)cellPreloadDelay;
+ (BOOL)isDetailFeedCellPreload;
+ (long long)scrollContinuousDirectionCount;
+ (long long)cellPreloadDelayCount;
+ (id)closeClassNames;

@end
