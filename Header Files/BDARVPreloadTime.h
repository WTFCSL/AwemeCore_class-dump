//
//     Generated by private class-dump
//

@interface BDARVPreloadTime : NSObject {
    double _preloadTime;
    double _showTime;
    double _clickTime;
}

@property (nonatomic) double preloadTime;
@property (nonatomic) double showTime;
@property (nonatomic) double clickTime;

+ (id)getPreloadTimeItemForKey:(id)arg0;
+ (void)setShowTime:(double)arg0 forKey:(id)arg1;
+ (void)setPreloadTime:(double)arg0 forKey:(id)arg1;
+ (void)setClickTime:(double)arg0 forKey:(id)arg1;
+ (double)getPreloadTimeForKey:(id)arg0;
+ (double)getShowTimeForKey:(id)arg0;
+ (double)getClickTimeForKey:(id)arg0;
+ (void)savePreloadTime:(id)arg0 forKey:(id)arg1;

- (double)showTime;
- (void)setShowTime:(double)arg0;
- (double)preloadTime;
- (void)setPreloadTime:(double)arg0;
- (void)setClickTime:(double)arg0;
- (double)clickTime;

@end