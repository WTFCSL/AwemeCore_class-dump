//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol AWELiveShelfService;

@interface AWELiveShelfServiceIMP : HTSService <AWELiveShelfService> {
    NSObject<AWELiveShelfService> *_delegate;
}

@property (weak, nonatomic) NSObject<AWELiveShelfService> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isWeakBCAAInstance;
- (BOOL)openNativeLiveShelfWithSource:(id)arg0 type:(long long)arg1 params:(id)arg2;
- (id)getLiveRoomInfo;
- (id)getLiveRoomCouponInfo;
- (BOOL)shelfPageIsOpenNow;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
