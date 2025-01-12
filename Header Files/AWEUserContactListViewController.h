//
//     Generated by private class-dump
//

@class NSMutableArray, AWEContactListTableViewHeader, NSArray, NSString, UIView, NSObject, UITableView;
@protocol AFDMentionUserPickerContactDatasourceProtocol, AWEIMUserListHideTipFooterProtocol;

@interface AWEUserContactListViewController : UIViewController <AWETableViewSectionIndexDelegate, UITableViewDelegate, UITableViewDataSource, AWETableViewSectionIndexDelegate, AWECommonSearchBarDelegate> {
    BOOL _isUseSystemIndexView;
    id /* block */ _selectCompletion;
    NSString *_itemID;
    NSString *_refer;
    NSString *_enterMethod;
    NSString *_source;
    UITableView *_tableView;
    AWEContactListTableViewHeader *_tableViewHeader;
    UIView<AWEIMUserListHideTipFooterProtocol> *_tipFooterView;
    NSObject<AFDMentionUserPickerContactDatasourceProtocol> *_dataSource;
    NSArray *_sectionData;
    NSArray *_sectionTitles;
    NSArray *_sectionIndexTitles;
    NSMutableArray *_customSectionTypeList;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEContactListTableViewHeader *tableViewHeader;
@property (retain, nonatomic) UIView<AWEIMUserListHideTipFooterProtocol> *tipFooterView;
@property (retain, nonatomic) NSObject<AFDMentionUserPickerContactDatasourceProtocol> *dataSource;
@property (retain, nonatomic) NSArray *sectionData;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSArray *sectionIndexTitles;
@property (retain, nonatomic) NSMutableArray *customSectionTypeList;
@property (nonatomic) BOOL isUseSystemIndexView;
@property (copy, nonatomic) id /* block */ selectCompletion;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *refer;
@property (retain, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setRefer:(id)arg0;
- (id)refer;
- (void)p_setupUI;
- (BOOL)p_isSearchMode;
- (BOOL)needUseSystemIndexView;
- (void)setIsUseSystemIndexView:(BOOL)arg0;
- (void)p_initializeContactList;
- (id)tableViewHeader;
- (void)p_prepareData;
- (void)p_refreshIndexView;
- (void)p_refreshLoadMoreFooter;
- (void)p_refreshTipFooter;
- (void)p_refreshEmptyView;
- (void)setCustomSectionTypeList:(id)arg0;
- (BOOL)p_isNeedSection:(unsigned long long)arg0;
- (id)customSectionTypeList;
- (BOOL)isUseSystemIndexView;
- (void)setSectionData:(id)arg0;
- (id)tipFooterView;
- (BOOL)p_isAppendedCellAtIndexPath:(id)arg0;
- (BOOL)p_shouldAppendCellInSection:(long long)arg0;
- (void)updateIndexViewConfiguration:(id)arg0;
- (void)p_refreshPage;
- (void)p_updateHighlightSectionHeader;
- (long long)p_currentSection;
- (id)p_userAtIndexPath:(id)arg0;
- (id /* block */)selectCompletion;
- (void)updateEmptyPageConfig:(id)arg0 isSearchMode:(BOOL)arg1;
- (void)setSelectCompletion:(id /* block */)arg0;
- (void)setTableViewHeader:(id)arg0;
- (void)setTipFooterView:(id)arg0;
- (id)searchBar;
- (void)setDataSource:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (BOOL)textFieldShouldClear:(id)arg0;
- (id)dataSource;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (id)source;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (id)itemID;
- (id)sectionTitles;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setItemID:(id)arg0;
- (id)sectionIndexTitlesForTableView:(id)arg0;
- (long long)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)sectionIndexTitles;
- (void)setSource:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)setSectionIndexTitles:(id)arg0;
- (id)sectionData;
- (void)setSectionTitles:(id)arg0;

@end
