//
//     Generated by private class-dump
//

@class IESLiveShortTouchItem;

@interface IESLiveShortTouchPriorityItem : NSObject {
    IESLiveShortTouchItem *_item;
    id /* block */ _completion;
}

@property (retain, nonatomic) IESLiveShortTouchItem *item;
@property (copy, nonatomic) id /* block */ completion;

- (id)item;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setItem:(id)arg0;

@end
