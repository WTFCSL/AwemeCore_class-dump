//
//     Generated by private class-dump
//

@class IESECSliceXDataSource;

@interface IESECSliceXContainerUpdateContext : NSObject {
    BOOL _avoidCalculateSize;
    IESECSliceXDataSource *_dataSource;
    id /* block */ _complete;
    struct CGSize { double width; double height; } _fitSize;
}

@property (retain, nonatomic) IESECSliceXDataSource *dataSource;
@property (nonatomic) struct CGSize { double width; double height; } fitSize;
@property (copy, nonatomic) id /* block */ complete;
@property (readonly, nonatomic) BOOL avoidCalculateSize;

- (struct CGSize { double x0; double x1; })fitSize;
- (void)setFitSize:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithDataSource:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1 complete:(id /* block */)arg2;
- (id)initWithDataSource:(id)arg0 complete:(id /* block */)arg1;
- (BOOL)avoidCalculateSize;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg0;

@end
