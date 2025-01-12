//
//     Generated by private class-dump
//

@class NSString, DUXVacantView;

@interface AWEScreenCastSearchDeviceNoNetworkView : UIView <BDSCSearchDeviceNoNetworkViewProtocol> {
    BOOL _isLandscape;
    unsigned long long _searchStatusType;
    id /* block */ _clickBlock;
    DUXVacantView *_vacantView;
}

@property (retain, nonatomic) DUXVacantView *vacantView;
@property (nonatomic) unsigned long long searchStatusType;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (id)vacantView;
- (void)setVacantView:(id)arg0;
- (unsigned long long)searchStatusType;
- (void)setSearchStatusType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setIsLandscape:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isLandscape;

@end
