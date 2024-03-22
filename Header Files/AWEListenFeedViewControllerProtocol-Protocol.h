//
//     Generated by private class-dump
//

@class AWEListDataController, NSString, AWEAwemeModel, AWEListenFeedPlayModel;

@protocol AWEListenFeedViewControllerProtocol <NSObject>

@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEListDataController *externalDataController;
@property (nonatomic) long long initialIndex;

- (id)awemeModel;
- (id)referString;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setPlayModel:(id)arg0;
- (id)playModel;
- (void)setExternalDataController:(id)arg0;
- (id)externalDataController;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end