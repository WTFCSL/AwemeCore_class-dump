//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGReportNotificationParam : BDUGBaseRequestParam {
    long long _notiNum;
    long long _badgeNum;
    NSString *_scene;
}

@property (nonatomic) long long notiNum;
@property (nonatomic) long long badgeNum;
@property (copy, nonatomic) NSString *scene;

- (long long)notiNum;
- (void)setNotiNum:(long long)arg0;
- (long long)badgeNum;
- (void)setBadgeNum:(long long)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;

@end
