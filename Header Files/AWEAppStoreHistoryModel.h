//
//     Generated by private class-dump
//

@interface AWEAppStoreHistoryModel : NSObject <NSCoding> {
    double _lastShowBottomNotificationTime;
    double _lastShowTopNotificationTime;
    long long _showBottomNotificationCount;
}

@property (nonatomic) double lastShowBottomNotificationTime;
@property (nonatomic) double lastShowTopNotificationTime;
@property (nonatomic) long long showBottomNotificationCount;

- (double)lastShowTopNotificationTime;
- (double)lastShowBottomNotificationTime;
- (long long)showBottomNotificationCount;
- (void)setLastShowTopNotificationTime:(double)arg0;
- (void)setShowBottomNotificationCount:(long long)arg0;
- (void)setLastShowBottomNotificationTime:(double)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end