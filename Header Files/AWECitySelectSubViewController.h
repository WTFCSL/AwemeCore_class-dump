//
//     Generated by private class-dump
//

@class AWECityModel, NSString, AWECitySelectAppearance, UITableView;

@interface AWECitySelectSubViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    AWECitySelectAppearance *_appearance;
    AWECityModel *_city;
    id /* block */ _completion;
    UITableView *_cityTableView;
}

@property (retain, nonatomic) UITableView *cityTableView;
@property (retain, nonatomic) AWECitySelectAppearance *appearance;
@property (retain, nonatomic) AWECityModel *city;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCityTableView:(id)arg0;
- (id)cityTableView;
- (id)city;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id /* block */)completion;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setAppearance:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (void)setCity:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)appearance;
- (void)viewDidLoad;
- (void)back;

@end