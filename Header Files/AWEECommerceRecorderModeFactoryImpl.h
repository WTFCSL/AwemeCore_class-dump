//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;

@interface AWEECommerceRecorderModeFactoryImpl : NSObject <ACCRecordModeFactory> {
    BOOL _isCameraInitial;
    AWEVideoPublishViewModel *_repository;
}

@property (nonatomic) BOOL isCameraInitial;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabConfigWithTitle:(id)arg0 forMode:(id)arg1;

- (void)setIsCameraInitial:(BOOL)arg0;
- (id)modeWithIdentifier:(long long)arg0;
- (BOOL)isCameraInitial;
- (id)displayModesArray;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end
