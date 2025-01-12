//
//     Generated by private class-dump
//

@class AWEUGPendantNewCapsuleContentCountdown, AWEUGPendantNewCapsuleContentText, NSDictionary, NSString, AWEUGPendantNewCapsuleContentProgressBar;

@interface AWEUGPendantNewCapsuleContentModel : MTLModel <MTLJSONSerializing> {
    AWEUGPendantNewCapsuleContentText *_defaultContent;
    AWEUGPendantNewCapsuleContentProgressBar *_progressBar;
    AWEUGPendantNewCapsuleContentCountdown *_countdown;
}

@property (retain, nonatomic) AWEUGPendantNewCapsuleContentText *defaultContent;
@property (retain, nonatomic) AWEUGPendantNewCapsuleContentProgressBar *progressBar;
@property (retain, nonatomic) AWEUGPendantNewCapsuleContentCountdown *countdown;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)defaultContent;
- (void)setDefaultContent:(id)arg0;
- (void).cxx_destruct;
- (id)countdown;
- (void)setCountdown:(id)arg0;
- (id)progressBar;
- (void)setProgressBar:(id)arg0;

@end
