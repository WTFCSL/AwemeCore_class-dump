//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString, UIView, AWESettingSectionModel, UITableView;

@interface AWEPushSettingActionSheet : UIView <UITableViewDelegate, UITableViewDataSource> {
    BOOL _useCardUIStyle;
    NSString *_identifier;
    NSNumber *_selectValue;
    id /* block */ _closeBlock;
    UITableView *_tableView;
    UIView *_headerView;
    NSArray *_dataSource;
    AWESettingSectionModel *_sectionModel;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL useCardUIStyle;
@property (retain, nonatomic) AWESettingSectionModel *sectionModel;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *selectValue;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sheetWithModels:(id)arg0;
+ (id)sheetWithModels:(id)arg0 useCardUIStyle:(BOOL)arg1;
+ (id)sheetWithModels:(id)arg0 useCardUIStyle:(BOOL)arg1 sectionModel:(id)arg2;
+ (id)cellReuseIdentiferWithUseCardUIStyle:(BOOL)arg0;
+ (id)headerViewIdentifierWithUseCardUIStyle:(BOOL)arg0;
+ (void)generateModelAttributedTitleWithModel:(id)arg0;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (BOOL)useCardUIStyle;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (id)sectionModel;
- (void)setSectionModel:(id)arg0;
- (id)selectValue;
- (void)setSelectValue:(id)arg0;
- (void)reloadDataWithNewItems:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)dataSource;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHeaderView:(id)arg0;
- (id)identifier;
- (void)cancel;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)headerView;
- (void)setIdentifier:(id)arg0;

@end