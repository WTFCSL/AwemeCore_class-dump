//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface DUXInfoPanelLinkView : NSObject <DUXInfoPanelContent> {
    NSString *_text;
    id /* block */ _duxInfoPanelLinkViewClickAction;
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ duxInfoPanelLinkViewClickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxInfoPanel_view;
- (id)initWithText:(id)arg0 clickAction:(id /* block */)arg1;
- (void)didClickAction;
- (void)setDuxInfoPanelLinkViewClickAction:(id /* block */)arg0;
- (id /* block */)duxInfoPanelLinkViewClickAction;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setLabel:(id)arg0;
- (id)text;
- (id)label;

@end
