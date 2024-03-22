//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveFixedChatInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *panelBg;
@property (retain, nonatomic) HTSLiveImage *contentDefault;
@property (retain, nonatomic) HTSLiveImage *contentSelected;
@property (retain, nonatomic) HTSLiveImage *panelHead;
@property (retain, nonatomic) NSMutableArray *fixedChatListArray;
@property (readonly, nonatomic) unsigned long long fixedChatListArray_Count;
@property (retain, nonatomic) NSMutableArray *fixedEmojiListArray;
@property (readonly, nonatomic) unsigned long long fixedEmojiListArray_Count;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *textDefaultColor;
@property (copy, nonatomic) NSString *textSelectedColor;
@property (retain, nonatomic) HTSLiveImage *cancelIcon;
@property (nonatomic) BOOL hasCancelIcon;

+ (id)descriptor;

- (void)setPanelBg:(id)arg0;
- (void)setPanelHead:(id)arg0;
- (void)setContentDefault:(id)arg0;
- (void)setContentSelected:(id)arg0;
- (void)preloadSkinImage;
- (id)panelBg;
- (id)panelHead;
- (id)contentSelected;
- (id)contentDefault;
- (BOOL)isHasEmojiData;
- (void)loadData:(id)arg0;

@end