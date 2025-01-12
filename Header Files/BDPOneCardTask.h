//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, BDLynxView, UIView, BDPLynxErrorMonitor;
@protocol BDLOneCardViewProtocol;

@interface BDPOneCardTask : NSObject <BDLynxClientViewDelegate> {
    long long updateConut;
    long long errorCount;
    long long sizeChangeCount;
    NSString *_schema;
    NSString *_cardID;
    NSString *_groupID;
    NSString *_uniqueID;
    NSString *_publishVersion;
    NSString *_developer_id;
    NSMutableDictionary *_customFields;
    double _tempFectchStartTime;
    BDLynxView *_lynxView;
    UIView<BDLOneCardViewProtocol> *_view;
    long long _widthMode;
    long long _heightMode;
    NSDictionary *_componentDict;
    BDPLynxErrorMonitor *_errMonitor;
    id /* block */ _oneCardCompletion;
    NSString *_customID;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *publishVersion;
@property (copy, nonatomic) NSString *developer_id;
@property (retain, nonatomic) NSMutableDictionary *customFields;
@property (nonatomic) double tempFectchStartTime;
@property (weak, nonatomic) BDLynxView *lynxView;
@property (weak, nonatomic) UIView<BDLOneCardViewProtocol> *view;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (retain, nonatomic) NSDictionary *componentDict;
@property (retain, nonatomic) BDPLynxErrorMonitor *errMonitor;
@property (copy, nonatomic) id /* block */ oneCardCompletion;
@property (copy, nonatomic) NSString *customID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWidthMode:(long long)arg0;
- (void)setHeightMode:(long long)arg0;
- (id)lynxView;
- (id)customID;
- (long long)widthMode;
- (long long)heightMode;
- (void)setCustomFields:(id)arg0;
- (id)customFields;
- (void)setLynxView:(id)arg0;
- (void)loadLynxView;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidUpdate;
- (void)viewDidRecieveError:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (void)setupLynxView;
- (id)componentDict;
- (void)setComponentDict:(id)arg0;
- (void)setCustomID:(id)arg0;
- (id)publishVersion;
- (void)setPublishVersion:(id)arg0;
- (void)setupTask:(id)arg0;
- (void)setupOneCardModel:(id)arg0;
- (void)setOneCardCompletion:(id /* block */)arg0;
- (void)setDeveloper_id:(id)arg0;
- (void)tracker:(id)arg0 param:(id)arg1;
- (void)registerComponentIfNeed;
- (double)tempFectchStartTime;
- (id)developer_id;
- (void)setTempFectchStartTime:(double)arg0;
- (id /* block */)oneCardCompletion;
- (id)errMonitor;
- (id)initWithSchema:(id)arg0 oneCardModel:(id)arg1 options:(id)arg2;
- (void)setErrMonitor:(id)arg0;
- (void)setSchema:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setView:(id)arg0;
- (id)schema;
- (id)view;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
