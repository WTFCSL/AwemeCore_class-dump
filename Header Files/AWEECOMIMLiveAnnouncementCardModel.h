//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEECOMIMLiveAnnouncementCardModel : AWEECOMIMBaseCardModel <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMCardComponentOperationPanelProtocol, AWEECOMIMSubCardLiveAnnouncementCardProtocol> {
    BOOL _isExpired;
    NSString *_title;
    NSString *_liveText;
    NSString *_liveTimeStr;
    NSString *_livePreview;
    NSArray *_buttons;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isExpired;
@property (copy, nonatomic) NSString *liveText;
@property (copy, nonatomic) NSString *liveTimeStr;
@property (copy, nonatomic) NSString *livePreview;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;

- (id)livePreview;
- (void)setLivePreview:(id)arg0;
- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)setLiveText:(id)arg0;
- (void)setLiveTimeStr:(id)arg0;
- (id)liveTimeStr;
- (void)didSkipButtonClick:(id)arg0;
- (BOOL)isSameDay:(int)arg0 timestamp:(int)arg1;
- (BOOL)isSameYear:(int)arg0 timestamp:(int)arg1;
- (id)dateStringWithFormat:(id)arg0 date:(id)arg1;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)liveText;
- (void)setIsExpired:(BOOL)arg0;

@end
