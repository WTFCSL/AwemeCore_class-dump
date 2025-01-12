//
//     Generated by private class-dump
//

@class HTSLiveGradientBackgroundView, NSArray, NSString, UIView, UITableView;

@interface IESLivePlaybackLandScapeSelectTableView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate> {
    UITableView *_tableView;
    UIView *_backgroundView;
    id /* block */ _selectedBlock;
    id /* block */ _shouldSelectedBlock;
    id /* block */ _dismissBlock;
    HTSLiveGradientBackgroundView *_container;
    NSArray *_list;
    long long _selectIdx;
}

@property (retain, nonatomic) HTSLiveGradientBackgroundView *container;
@property (retain, nonatomic) NSArray *list;
@property (nonatomic) long long selectIdx;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ shouldSelectedBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (long long)selectIdx;
- (void)setSelectIdx:(long long)arg0;
- (void)updateDataList:(id)arg0 initialIndex:(long long)arg1;
- (id /* block */)shouldSelectedBlock;
- (void)updateDataList:(id)arg0;
- (void)setShouldSelectedBlock:(id /* block */)arg0;
- (id)container;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (id)backgroundView;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)list;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setContainer:(id)arg0;
- (void)setList:(id)arg0;
- (void)setup;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setBackgroundView:(id)arg0;
- (void)setupTableView;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
