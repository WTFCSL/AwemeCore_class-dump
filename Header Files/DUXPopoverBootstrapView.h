//
//     Generated by private class-dump
//

@class NSString, UIColor, UIFont;

@interface DUXPopoverBootstrapView : NSObject <DUXPopoverContent> {
    NSString *_contentText;
    NSString *_linkText;
    UIColor *_contentColor;
    UIColor *_linkColor;
    UIFont *_contentFont;
    UIFont *_linkFont;
}

@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *linkColor;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIFont *linkFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)contentFont;
- (void)setContentFont:(id)arg0;
- (void)setLinkFont:(id)arg0;
- (id)linkFont;
- (id)initWithContentText:(id)arg0 linkText:(id)arg1;
- (id)contentColor;
- (void).cxx_destruct;
- (void)setContentColor:(id)arg0;
- (id)linkColor;
- (id)contentText;
- (void)setContentText:(id)arg0;
- (id)linkText;
- (void)setLinkText:(id)arg0;
- (void)setLinkColor:(id)arg0;

@end