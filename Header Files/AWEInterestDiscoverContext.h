//
//     Generated by private class-dump
//

@class NSString, AWEListDataController, AWEAwemeModel;

@interface AWEInterestDiscoverContext : AWEPageContext {
    AWEAwemeModel *_fromModel;
    NSString *_referString;
    NSString *_enterFrom;
    AWEListDataController *_dataController;
}

@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) AWEListDataController *dataController;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (void)setDataController:(id)arg0;
- (void)updateContextWithAwemeModel:(id)arg0 referString:(id)arg1 enterFrom:(id)arg2 dataController:(id)arg3;
- (void).cxx_destruct;
- (id)dataController;

@end
