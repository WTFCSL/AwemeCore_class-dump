//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWELVPaymentManager : NSObject <AWELVPaymentManagerProtocol> {
    NSMutableArray *_hasPaidAlbumIDArray;
}

@property (retain, nonatomic) NSMutableArray *hasPaidAlbumIDArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (BOOL)shouldRefreshAwemePaidInfo:(id)arg0;
- (void)updatePaidAlbumCache:(id)arg0;
- (id)hasPaidAlbumIDArray;
- (void)setHasPaidAlbumIDArray:(id)arg0;
- (void).cxx_destruct;

@end