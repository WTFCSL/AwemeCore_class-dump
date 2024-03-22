//
//     Generated by private class-dump
//

@class IESLiveTouchInspectView, NSMutableDictionary, NSString;

@interface IESLiveAfterComboHelper : NSObject <IESLiveGiftAfterComboRouter> {
    BOOL _enableAfterSendSchema;
    IESLiveTouchInspectView *_inspectView;
    NSMutableDictionary *_giftAfterSendSchemaMap;
}

@property (retain, nonatomic) IESLiveTouchInspectView *inspectView;
@property (retain, nonatomic) NSMutableDictionary *giftAfterSendSchemaMap;
@property (nonatomic) BOOL enableAfterSendSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)arg0;
- (void)openSchemaWhenComboEndIfNeededWith:(id)arg0 lastNode:(id)arg1;
- (void)updateAfterSendSchemaWith:(id)arg0 giftID:(id)arg1;
- (void)clearGiftAfterSendSchemaMap;
- (void)createTouchEventInspectView;
- (void)removeTouchEventInspectViewForAuto:(BOOL)arg0;
- (BOOL)enableAfterSendSchema;
- (id)giftAfterSendSchemaMap;
- (id)inspectView;
- (void)setInspectView:(id)arg0;
- (void)setGiftAfterSendSchemaMap:(id)arg0;
- (void)setEnableAfterSendSchema:(BOOL)arg0;
- (void).cxx_destruct;

@end