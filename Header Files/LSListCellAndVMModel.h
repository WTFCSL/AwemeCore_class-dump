//
//     Generated by private class-dump
//

@class NSString, LSIMLynxConfigModel;

@interface LSListCellAndVMModel : NSObject {
    NSString *_cellReuseID;
    Class _cellClass;
    Class _cellVMClass;
    LSIMLynxConfigModel *_lynxConfig;
}

@property (readonly, copy, nonatomic) NSString *cellReuseID;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) Class cellVMClass;
@property (retain, nonatomic) LSIMLynxConfigModel *lynxConfig;

+ (id)modelWithCellReuseID:(id)arg0 cellClass:(Class)arg1 cellVMClass:(Class)arg2;

- (void)setLynxConfig:(id)arg0;
- (id)lynxConfig;
- (Class)cellVMClass;
- (id)cellReuseID;
- (id)initWithCellReuseID:(id)arg0 cellClass:(Class)arg1 cellVMClass:(Class)arg2;
- (void).cxx_destruct;
- (Class)cellClass;

@end
