//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUGEvadeVideoContentServiceImpl : HTSService <AWEUGEvadeVideoContentService> {
    BOOL _isLandscape;
    NSString *_evadeReason;
}

@property (copy, nonatomic) NSString *evadeReason;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEvadeReason:(id)arg0;
- (id)evadeReason;
- (BOOL)checkIfInWhiteListWithAwemeModel:(id)arg0 allowedTypeList:(id)arg1;
- (id)getEvadeReason;
- (void)beforeEnterToLandscapeFeedNotification;
- (void)afterQuitFromLandscapeFeedNotification;
- (id)init;
- (void).cxx_destruct;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)isLandscape;

@end