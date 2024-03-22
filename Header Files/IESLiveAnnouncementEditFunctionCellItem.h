//
//     Generated by private class-dump
//

@class NSString, IESLiveAnnouncementViewModel;

@interface IESLiveAnnouncementEditFunctionCellItem : NSObject {
    BOOL _isNecessary;
    BOOL _enterNewPage;
    BOOL _disabled;
    BOOL _needDetail;
    NSString *_title;
    NSString *_detail;
    unsigned long long _style;
    id /* block */ _onItemTapped;
    IESLiveAnnouncementViewModel *_viewModel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL isNecessary;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL needDetail;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;

- (BOOL)enterNewPage;
- (void)setEnterNewPage:(BOOL)arg0;
- (void)setOnItemTapped:(id /* block */)arg0;
- (id /* block */)onItemTapped;
- (BOOL)needDetail;
- (void)setNeedDetail:(BOOL)arg0;
- (void)setIsNecessary:(BOOL)arg0;
- (BOOL)isNecessary;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg0;
- (unsigned long long)style;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)title;
- (id)detail;
- (id)viewModel;
- (void)setStyle:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;

@end