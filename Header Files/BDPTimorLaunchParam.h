//
//     Generated by private class-dump
//

@class BDPSchema, BDPXScreenParameters, NSURL, NSError, BDPOneCardModel, UIViewController;

@interface BDPTimorLaunchParam : NSObject {
    NSURL *_URL;
    long long _launchMode;
    long long _openStyle;
    BDPSchema *_schema;
    NSError *_schemaError;
    UIViewController *_presentingVC;
    double _openURLTime;
    double _openURLTimestamp;
    BDPXScreenParameters *_XScreenParams;
    BDPOneCardModel *_oneCardModel;
    id /* block */ _willEnterFullScreenBlk;
    id /* block */ _didEnterFullScreenBlk;
    id /* block */ _willEnterSmallScreenBlk;
    id /* block */ _didEnterSmallScreenBlk;
    id /* block */ _viewWillAppearBlk;
    id /* block */ _viewDidAppearBlk;
    id /* block */ _viewWillDisappearBlk;
    id /* block */ _viewDidDisappearBlk;
    id /* block */ _willCloseXScreenWindowBlk;
}

@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) long long launchMode;
@property (nonatomic) long long openStyle;
@property (copy, nonatomic) BDPSchema *schema;
@property (retain, nonatomic) NSError *schemaError;
@property (retain, nonatomic) UIViewController *presentingVC;
@property (nonatomic) double openURLTime;
@property (nonatomic) double openURLTimestamp;
@property (retain, nonatomic) BDPXScreenParameters *XScreenParams;
@property (retain, nonatomic) BDPOneCardModel *oneCardModel;
@property (copy, nonatomic) id /* block */ willEnterFullScreenBlk;
@property (copy, nonatomic) id /* block */ didEnterFullScreenBlk;
@property (copy, nonatomic) id /* block */ willEnterSmallScreenBlk;
@property (copy, nonatomic) id /* block */ didEnterSmallScreenBlk;
@property (copy, nonatomic) id /* block */ viewWillAppearBlk;
@property (copy, nonatomic) id /* block */ viewDidAppearBlk;
@property (copy, nonatomic) id /* block */ viewWillDisappearBlk;
@property (copy, nonatomic) id /* block */ viewDidDisappearBlk;
@property (copy, nonatomic) id /* block */ willCloseXScreenWindowBlk;

- (id)schemaError;
- (id)presentingVC;
- (void)setPresentingVC:(id)arg0;
- (double)openURLTime;
- (void)setOpenURLTime:(double)arg0;
- (void)setSchemaError:(id)arg0;
- (id)oneCardModel;
- (void)setOneCardModel:(id)arg0;
- (id /* block */)willEnterFullScreenBlk;
- (void)setWillEnterFullScreenBlk:(id /* block */)arg0;
- (id /* block */)didEnterFullScreenBlk;
- (void)setDidEnterFullScreenBlk:(id /* block */)arg0;
- (id /* block */)willEnterSmallScreenBlk;
- (void)setWillEnterSmallScreenBlk:(id /* block */)arg0;
- (id /* block */)didEnterSmallScreenBlk;
- (void)setDidEnterSmallScreenBlk:(id /* block */)arg0;
- (id /* block */)viewWillAppearBlk;
- (void)setViewWillAppearBlk:(id /* block */)arg0;
- (id /* block */)viewDidAppearBlk;
- (void)setViewDidAppearBlk:(id /* block */)arg0;
- (id /* block */)viewWillDisappearBlk;
- (void)setViewWillDisappearBlk:(id /* block */)arg0;
- (id /* block */)viewDidDisappearBlk;
- (void)setViewDidDisappearBlk:(id /* block */)arg0;
- (id)XScreenParams;
- (void)setXScreenParams:(id)arg0;
- (void)setOpenStyle:(long long)arg0;
- (void)setWillCloseXScreenWindowBlk:(id /* block */)arg0;
- (double)openURLTimestamp;
- (id /* block */)willCloseXScreenWindowBlk;
- (void)setOpenURLTimestamp:(double)arg0;
- (long long)openStyle;
- (void)setSchema:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg0;
- (void)setURL:(id)arg0;
- (id)URL;
- (void)setLaunchMode:(long long)arg0;
- (long long)launchMode;
- (id)schema;

@end
