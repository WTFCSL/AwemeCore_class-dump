//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWETeenProfileRedDotManager : NSObject {
    BOOL _shouldShow;
    NSMutableArray *_taskArray;
}

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (nonatomic) BOOL shouldShow;

+ (id)sharedInstance;

- (id)taskArray;
- (void)setTaskArray:(id)arg0;
- (void)setTaskShowenOfType:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)setShouldShow:(BOOL)arg0;

@end
