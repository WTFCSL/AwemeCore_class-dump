//
//     Generated by private class-dump
//

@class NSString, UILabel;

@interface AFDCloseFriendsColorRingNotesBubbleContent : NSObject <DUXPopoverContent> {
    BOOL _isBig;
    NSString *_text;
    UILabel *_textLabel;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL isBig;
@property (retain, nonatomic) UILabel *textLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (void)onAWEUIThemeChangeNotification;
- (BOOL)isBig;
- (BOOL)isReachedMaxCountWithString:(id)arg0;
- (long long)getFontSizeWithIsReachedMaxCount:(BOOL)arg0;
- (double)getLineSpaceWithIsReachedMaxCount:(BOOL)arg0;
- (id)initWithText:(id)arg0 isBig:(BOOL)arg1;
- (void)setIsBig:(BOOL)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)dealloc;
- (void)setTextLabel:(id)arg0;

@end
