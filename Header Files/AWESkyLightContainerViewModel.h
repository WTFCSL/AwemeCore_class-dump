//
//     Generated by private class-dump
//

@class NSString;
@protocol AWESkyLightTopBarViewModelProtocol, AWESkyLightContentViewModelProtocol;

@interface AWESkyLightContainerViewModel : NSObject <AWESkyLightContainerViewModelProtocol> {
    BOOL isSkyLightExpanded;
    BOOL _skyLightDataReady;
    BOOL _contentDataReady;
    id<AWESkyLightTopBarViewModelProtocol> _topBarViewModel;
    id<AWESkyLightContentViewModelProtocol> _contentViewModel;
}

@property (retain, nonatomic) id<AWESkyLightTopBarViewModelProtocol> topBarViewModel;
@property (retain, nonatomic) id<AWESkyLightContentViewModelProtocol> contentViewModel;
@property (nonatomic) BOOL skyLightDataReady;
@property (nonatomic) BOOL contentDataReady;
@property (nonatomic) BOOL isSkyLightExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)contentViewModel;
- (void)setContentViewModel:(id)arg0;
- (double)skyLightHeight;
- (id)initWithSkyLightTopBarViewModel:(id)arg0 contentViewModel:(id)arg1;
- (void)setIsSkyLightExpanded:(BOOL)arg0;
- (BOOL)isSkyLightExpanded;
- (BOOL)skyLightDataReady;
- (id)skyLightTopBar;
- (void)skyLightStatusChanged:(BOOL)arg0;
- (id)topBarViewModel;
- (void)setSkyLightDataReady:(BOOL)arg0;
- (void)setContentDataReady:(BOOL)arg0;
- (BOOL)contentDataReady;
- (void)setTopBarViewModel:(id)arg0;
- (id)contentViewController;
- (void).cxx_destruct;
- (id)capsuleView;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
