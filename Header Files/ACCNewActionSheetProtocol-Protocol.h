//
//     Generated by private class-dump
//

@class NSString;

@protocol ACCNewActionSheetProtocol <NSObject>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void)addActionWithTitle:(id)arg0 handler:(id /* block */)arg1;
- (void)addActionWithTitle:(id)arg0 subtitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addActionWithTitle:(id)arg0 subtitle:(id)arg1 highlighted:(BOOL)arg2 handler:(id /* block */)arg3;
- (void)setCancelHandler:(id /* block */)arg0;
- (void)dismiss;
- (void)show;
- (id)title;
- (void)setTitle:(id)arg0;
- (id /* block */)cancelHandler;

@end