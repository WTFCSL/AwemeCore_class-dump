//
//     Generated by private class-dump
//

@class NSString, UILabel, UIImageView;

@interface ACCTextErrorContentView : NSObject <DUXPopoverContent> {
    UILabel *_contentLabel;
    UIImageView *_ignoreImageView;
    id /* block */ _tapTextAction;
    id /* block */ _tapIgnoreAction;
    NSString *_contentText;
}

@property (copy, nonatomic) NSString *contentText;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *ignoreImageView;
@property (copy, nonatomic) id /* block */ tapTextAction;
@property (copy, nonatomic) id /* block */ tapIgnoreAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (void)tapLabel;
- (void)tapImageView;
- (id /* block */)tapIgnoreAction;
- (id /* block */)tapTextAction;
- (id)initWithContentText:(id)arg0;
- (id)ignoreImageView;
- (void)setIgnoreImageView:(id)arg0;
- (void)setTapTextAction:(id /* block */)arg0;
- (void)setTapIgnoreAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)contentText;
- (void)setContentText:(id)arg0;

@end
