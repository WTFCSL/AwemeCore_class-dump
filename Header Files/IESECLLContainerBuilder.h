//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESECLLContainerBuilder : IESECLLLayoutableBuilder {
    NSMutableArray *_subbuilders;
}

@property (readonly, copy, nonatomic) id /* block */ item;
@property (readonly, copy, nonatomic) id /* block */ spacer;
@property (readonly, copy, nonatomic) id /* block */ verticalGroup;
@property (readonly, copy, nonatomic) id /* block */ horizontalGroup;
@property (readonly, copy, nonatomic) id /* block */ stackGroup;
@property (readonly, copy, nonatomic) id /* block */ text;
@property (readonly, copy, nonatomic) id /* block */ rectangle;

- (id /* block */)horizontalGroup;
- (id /* block */)verticalGroup;
- (void)inflateSubviewsIntoMap:(id)arg0;
- (id /* block */)stackGroup;
- (id /* block */)item;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)text;
- (id /* block */)rectangle;
- (id /* block */)spacer;

@end
