//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface __RTVCustomPopoverSheetControllerDataBuilder : NSObject <RTVCustomPopoverSheetControllerDataBuilder> {
    NSMutableArray *_cellModelArray;
}

@property (readonly, nonatomic) NSMutableArray *cellModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModels;
- (void)addActionWithImage:(id)arg0 title:(id)arg1 titleColor:(id)arg2 handler:(id /* block */)arg3;
- (id)cellModelArray;
- (void)addActionWithImage:(id)arg0 title:(id)arg1 handler:(id /* block */)arg2;
- (void)addSwitchWithImage:(id)arg0 title:(id)arg1 isOn:(BOOL)arg2 handler:(id /* block */)arg3;
- (void)addBlankSplitWithHeight:(double)arg0;
- (id)init;
- (void).cxx_destruct;

@end
